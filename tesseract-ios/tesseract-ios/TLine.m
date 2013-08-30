//
//  TLine.m
//  tesseract-ios
//
//  Created by Martin Rybak on 8/30/13.
//  Copyright (c) 2013 Martin Rybak. All rights reserved.
//

#import "TLine.h"

@implementation TLine

@synthesize words = _words;

- words
{
    if (!_words)
        _words = [[NSMutableArray alloc] init];
    return _words;
}

@end
