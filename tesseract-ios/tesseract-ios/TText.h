//
//  TText.h
//  tesseract-ios
//
//  Created by Martin Rybak on 8/30/13.
//  Copyright (c) 2013 Martin Rybak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TText : NSObject

@property (strong, nonatomic) NSString* text;
@property (assign, nonatomic) float confidence;
@property (assign, nonatomic) CGRect box;

@end
