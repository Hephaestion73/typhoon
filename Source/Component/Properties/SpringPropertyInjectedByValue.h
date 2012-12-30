////////////////////////////////////////////////////////////////////////////////
//
//  JASPER BLUES
//  Copyright 2012 Jasper Blues
//  All Rights Reserved.
//
//  NOTICE: Jasper Blues permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>
#import "SpringInjectedProperty.h"


@interface SpringPropertyInjectedByValue : NSObject <SpringInjectedProperty>

@property (nonatomic, strong, readonly) NSString* name;
@property (nonatomic, readonly) SpringPropertyInjectionType type;
@property (nonatomic, strong, readonly) NSString* textValue;

- (id)initWithName:(NSString*)name value:(NSString*)value;

- (NSString*)description;


@end