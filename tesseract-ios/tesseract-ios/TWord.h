//
//  TWord.h
//  tesseract-ios
//
//  Created by Martin Rybak on 8/30/13.
//  Copyright (c) 2013 Martin Rybak. All rights reserved.
//

#import "TText.h"

@class TLine;

@interface TWord : TText

@property (weak, nonatomic) TLine* line;

@end
