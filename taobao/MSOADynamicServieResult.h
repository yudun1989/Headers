//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MSOADynamicServieResult : NSObject
{
    _Bool _success;
    NSDictionary *_resultData;
}

@property(retain, nonatomic) NSDictionary *resultData; // @synthesize resultData=_resultData;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithSuccess:(_Bool)arg1 resultData:(id)arg2;

@end

