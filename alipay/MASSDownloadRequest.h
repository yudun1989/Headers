//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MASSRequest.h"

@interface MASSDownloadRequest : MASSRequest
{
    _Bool _tfsRequest;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _headRcved;
}

@property(copy, nonatomic) CDUnknownBlockType headRcved; // @synthesize headRcved=_headRcved;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool tfsRequest; // @synthesize tfsRequest=_tfsRequest;
- (void).cxx_destruct;

@end

