//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

@interface UploadCodeNetConnect : NSObject
{
    NSMutableData *_responseData;
    NSString *_filePath;
    CDUnknownBlockType _starResBlock;
}

@property(copy, nonatomic) CDUnknownBlockType starResBlock; // @synthesize starResBlock=_starResBlock;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (long long)getBkn:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)getTXVideoResModel:(id)arg1 ftnModel:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

