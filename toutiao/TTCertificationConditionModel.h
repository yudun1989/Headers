//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTCertificationConditionModel : NSObject
{
    _Bool _isCompletion;
    _Bool _hiddenBottomLine;
    int _type;
    NSString *_iconName;
    NSString *_titleText;
    NSString *_regexText;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hiddenBottomLine; // @synthesize hiddenBottomLine=_hiddenBottomLine;
@property(nonatomic) _Bool isCompletion; // @synthesize isCompletion=_isCompletion;
@property(copy, nonatomic) NSString *regexText; // @synthesize regexText=_regexText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;

@end

