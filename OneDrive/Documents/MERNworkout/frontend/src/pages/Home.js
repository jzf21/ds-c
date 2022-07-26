import React, { useEffect, useState } from 'react'




export const Home = () => {
    const [workouts,setWorkouts]=useState(null)
    useEffect(()=>{
        const fetchWorkouts= async()=>{
            const response =await fetch('http://localhost:4000/api/workouts')
            const json = await response.json()

            if(response.ok){

            }

        }
        fetchWorkouts()
    },[])
  return (
    <div className='home'>
        <div className='workouts'>
            {workouts && workouts.map(()=>( 
                <p key={workout._id}></p>

            ))}
        </div>
    </div>
  )
}
