//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCFilter.h"

@class NSString;

@interface TXCGreenScreenFilter : TXCFilter
{
    _Bool _videoMirror;
    unsigned long long _videoRotate;
    NSString *_greenPath;
}

@property(retain, nonatomic) NSString *greenPath; // @synthesize greenPath=_greenPath;
@property(nonatomic) _Bool videoMirror; // @synthesize videoMirror=_videoMirror;
@property(nonatomic) unsigned long long videoRotate; // @synthesize videoRotate=_videoRotate;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;

@end

