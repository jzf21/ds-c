import React from 'react'
import { Bodygrids } from './Bodygrids'

export const Populars = () => {
  return (
    <div class="mx-7  user-box first-box md:m-10 md:mx-9 h-full">
   <div class="activity card" >
    <div class="title font-semibold">Most Popular Right Now</div>
    <div class="subtitle">Get the best hostel for the best price. </div>
  
     <div className='container scale-[0.6] justify-center md:mx-auto flex flex-row  md:scale-[0.63] gap-2 mr-5'>
      <Bodygrids ></Bodygrids>
      <Bodygrids></Bodygrids>
     </div>
    </div>
    </div>
 
  )
}
