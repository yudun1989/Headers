//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IdstRecoder, IdstRequestData;

@interface IdstRecoderManager : NSObject
{
    _Bool _isRecord;
    IdstRecoder *_recoder;
    CDUnknownBlockType _idstCallback;
    IdstRequestData *_requestData;
}

@property(retain, nonatomic) IdstRequestData *requestData; // @synthesize requestData=_requestData;
@property(copy, nonatomic) CDUnknownBlockType idstCallback; // @synthesize idstCallback=_idstCallback;
@property(retain, nonatomic) IdstRecoder *recoder; // @synthesize recoder=_recoder;
@property(nonatomic) _Bool isRecord; // @synthesize isRecord=_isRecord;
- (void).cxx_destruct;
- (void)startRecord:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)requestIdst:(id)arg1 withUrl:(id)arg2;
- (void)uploadIdst:(id)arg1;
- (void)writeFile:(short *)arg1 Length:(int)arg2 Step:(int)arg3;
- (void)getSpeechAudioSearchResult;
- (void)stopRecoder;
- (void)cancelRecoder;
- (void)startRecoder:(id)arg1;
- (void)initRecoder;
- (id)init;
- (void)dealloc;

@end

