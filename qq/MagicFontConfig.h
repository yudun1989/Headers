//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MagicFontConfig : NSObject
{
    _Bool _enable;
    _Bool _changeRuleOneWordEnable;
    _Bool _isUsing;
    int _groupSize;
    double _changeRuleFontSize1;
    double _changeRuleFontSize2;
    double _fontSizeNormal1;
    double _fontSizeNormal2;
    double _fontSizeMax1;
    double _fontSizeMax2;
    unsigned long long _timeStamp;
}

@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) _Bool isUsing; // @synthesize isUsing=_isUsing;
@property(nonatomic) int groupSize; // @synthesize groupSize=_groupSize;
@property(nonatomic) double fontSizeMax2; // @synthesize fontSizeMax2=_fontSizeMax2;
@property(nonatomic) double fontSizeMax1; // @synthesize fontSizeMax1=_fontSizeMax1;
@property(nonatomic) double fontSizeNormal2; // @synthesize fontSizeNormal2=_fontSizeNormal2;
@property(nonatomic) double fontSizeNormal1; // @synthesize fontSizeNormal1=_fontSizeNormal1;
@property(nonatomic) double changeRuleFontSize2; // @synthesize changeRuleFontSize2=_changeRuleFontSize2;
@property(nonatomic) double changeRuleFontSize1; // @synthesize changeRuleFontSize1=_changeRuleFontSize1;
@property(nonatomic) _Bool changeRuleOneWordEnable; // @synthesize changeRuleOneWordEnable=_changeRuleOneWordEnable;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (id)init;

@end

