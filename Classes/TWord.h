//
//  TWord.h
//  Tesseract
//
//  Created by Martin Rybak on 8/22/13.
//  Copyright (c) 2012 Martin Rybak.
//  Under MIT License. See 'LICENSE' for more informations.
//

#import <Foundation/Foundation.h>

@interface TWord : NSObject

@property (strong, nonatomic) NSString* text;
@property (assign, nonatomic) float confidence;
@property (assign, nonatomic) CGRect box;

@end