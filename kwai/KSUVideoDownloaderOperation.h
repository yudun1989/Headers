//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

@interface KSUVideoDownloaderOperation : AFHTTPRequestOperation
{
    CDUnknownBlockType _resumeDownloadResponseErrorBlock;
    CDUnknownBlockType _didReceiveResponseBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didReceiveResponseBlock; // @synthesize didReceiveResponseBlock=_didReceiveResponseBlock;
@property(copy, nonatomic) CDUnknownBlockType resumeDownloadResponseErrorBlock; // @synthesize resumeDownloadResponseErrorBlock=_resumeDownloadResponseErrorBlock;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;

@end

