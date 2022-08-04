const mongoose=require('mongoose')

const Schema =mongoose.Schema

const hostelSchema= new Schema({
    img:{
        type:Buffer,
        contentType:String
    },
    title:{
        type:String,
        required:true
    },
    address:{
        type:String,
        required:true
    },
    price:{
        type:Number,
        required:true
    },
    gender:{
        
    }
},{timestamps:true})