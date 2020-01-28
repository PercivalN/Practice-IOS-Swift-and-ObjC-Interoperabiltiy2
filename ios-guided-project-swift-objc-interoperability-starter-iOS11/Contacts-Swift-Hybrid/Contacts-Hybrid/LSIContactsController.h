//
//  LSIContactsController.h
//  Contacts-Hybrid
//
//  Created by Paul Solt on 1/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Contact; // forward declare the Swift class
//@class LSIContact;

NS_SWIFT_NAME(ContactsController)
@interface LSIContactsController : NSObject

// 1. Lightweight generics
// 2. Nullability
// 3. Change names of classes (Bug: going back and forth)

@property (nonatomic, readonly, nonnull) NSArray<Contact *> *contacts;

/*
 Nullability
 
 * nullable - Optional in Swift (nil or value)
	[Contact]?
 * nonnull - Not an Optional (can never be nil)
	[Contact]
 * nil_resettable - UITextField.text = nil (Sets the text to "")
	[Contact]?
 * nil_unspecified* - Default (Implicitly unwrapped optional)
	[Contact]!
 
 */



@end
