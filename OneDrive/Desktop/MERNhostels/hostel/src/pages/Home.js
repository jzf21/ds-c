import React from 'react';
import { Bodygrids } from '../components/Bodygrids';
import { Populars } from '../components/Populars';


export const Home = () => {
  return (
    <div className="App">
    
  <div className='grid grid-cols-1 md:grid-cols-2'>
    <div>
      <Populars>
      </Populars>
      </div>
    <div>
 
<h2 className='text-xl center mt-10 mx-10'>Recently Added</h2>
<div class="grid   grid-cols-1 md:grid-cols-3 gap-4 m-10 mt-10">


<div><Bodygrids></Bodygrids></div>
<div><Bodygrids></Bodygrids></div>
<div><Bodygrids></Bodygrids></div>

</div>
</div>
</div>
  
    
  </div>
  )
}

