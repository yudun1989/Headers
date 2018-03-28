//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface RNCryptorEngine : NSObject
{
    struct _CCCryptor *__cryptor;
    NSMutableData *__buffer;
}

@property(readonly, nonatomic) NSMutableData *buffer; // @synthesize buffer=__buffer;
@property(readonly, nonatomic) struct _CCCryptor *cryptor; // @synthesize cryptor=__cryptor;
- (void).cxx_destruct;
- (id)finishWithError:(id *)arg1;
- (id)addData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithOperation:(unsigned int)arg1 settings:(struct _RNCryptorSettings)arg2 key:(id)arg3 IV:(id)arg4 error:(id *)arg5;

@end

