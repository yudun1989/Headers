//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AlibcSafeMutableArray;

@interface AlibcMtopRequestContainer : NSObject
{
    AlibcSafeMutableArray *_requests;
}

+ (id)shareInstance;
@property(retain, nonatomic) AlibcSafeMutableArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (void)removeMtopRequest:(id)arg1;
- (void)addMtopRequest:(id)arg1;
- (id)init;

@end

