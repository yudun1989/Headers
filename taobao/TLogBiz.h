//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TLogBiz : NSObject
{
    NSString *_moduleName;
}

@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)log:(long long)arg1 exception:(id)arg2 content:(id)arg3;
- (void)error:(id)arg1 exception:(id)arg2;
- (void)error:(id)arg1;
- (void)warn:(id)arg1 exception:(id)arg2;
- (void)warn:(id)arg1;
- (void)debug:(id)arg1 exception:(id)arg2;
- (void)debug:(id)arg1;
- (void)info:(id)arg1 exception:(id)arg2;
- (void)info:(id)arg1;
- (id)initWithModuleName:(id)arg1;

@end

