//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GXAction.h"

@class NSString;

@interface GXStartWebAction : GXAction
{
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)asyncFeedBack:(id)arg1 acttion:(id)arg2 actionId:(long long)arg3 result:(id)arg4 doNext:(_Bool)arg5;
- (int)actByInScript:(id)arg1;
- (void)dealloc;
- (_Bool)isValidInActions:(id)arg1 error:(id *)arg2;
- (id)initWith:(id)arg1;

@end

