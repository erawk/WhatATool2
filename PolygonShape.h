//
//  PolygonShape.h
//  WhatATool2
//
//  Created by Ed on 28/06/09.
//  Copyright 2009 Ed Lui. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PolygonShape : NSObject {
    int numberOfSides;
    int minimumNumberOfSides;
    int maximumNumberOfSides;
}

@property int numberOfSides;
@property int minimumNumberOfSides;
@property int maximumNumberOfSides;

@property(readonly) float angleInDegrees;
@property(readonly) float angleInRadians;
@property(readonly) NSString *name;

- (id)initWithNumberOfSides:(int)sides;
- (id)initWithNumberOfSides:(int)sides minimumNumberOfSides:(int)min;
- (id)initWithNumberOfSides:(int)sides minimumNumberOfSides:(int)min maximumNumberOfSides:(int)max;

- (BOOL)isValidNumberOfSides:(int)sides;
- (BOOL)isValidMinimumNumberOfSides:(int)sides;
- (BOOL)isValidMaximumNumberOfSides:(int)sides;

- (NSString *)description;

@end
