require('dotenv').config()
const mongoose=require('mongoose')


const express=require('express')

const app=express()//create an express app

app.get('/',(req,res)=>{
    res.json({mssg:'welcome to the app'})
})

//middlewate
app.use(express.json())

app.use((req,res,next)=>{
    consolelog(req.path,req.method)
    next()
})

app.use('/')
//connect to db
mongoose.connect(process.env.MONGO_URI)
.then(()=>{
    console.log('connected to db')
})

//listen for requesta
app.listen(4000,()=>{
    console.log('listening on port',process.env.PORT)
})