import React from 'react'
import { Tab } from '@headlessui/react'



import { Avatar } from '@mui/material'
import { Link } from 'react-router-dom'

export const Navbar = () => {
  return (
  
    <nav className="mx-5 sticky top-0 z-10 mt-5 rounded-full md:mx-9 navbar1">
  <div className="max-w-5x  px-4">
    <div className="flex  justify-between h-16">
    
      <div class="w-6 block md:hidden items-center right-0  mt-5 ml-0">
            <label for="navbarToggler">
                <div class="h-1 my-1 bg-white border-[1px]  border-white"></div>
                <div class="h-1 my-1 bg-white border-[1px] border-white"></div>
                <div class="h-1 my-1 bg-white border-[1px] border-white"></div>
            </label>
        </div>
        <input type="checkbox" id="navbarToggler" class="hidden"/>
        <div class="x hidden top-16 left-0 md:flex flex-col md:flex-row justify-evenly  " >
        <a href="/" className='link' >Dashboard</a>
        <a href="/listing" className='link'>Hostel Listing</a>
        
        <a href="/" className='link'>Popular Listings</a>
       
          <a href='/profile' className='float-right link'>Contact Us</a>
        
        
    
        
        
      </div>
      <button className=' link1'><a href='/signup'><Link to='/signup'>Signup</Link></a></button>
    </div>
  </div>
</nav>

    
  )
}