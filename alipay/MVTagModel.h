//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MVTagModel : NSObject
{
    unsigned long long _labelStyle;
    NSString *_text;
}

+ (id)tagModelWithStyle:(unsigned long long)arg1 text:(id)arg2;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long labelStyle; // @synthesize labelStyle=_labelStyle;
- (void).cxx_destruct;

@end

