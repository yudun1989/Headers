//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWTRScribeEvent.h"

@class NSError, NSString;

@interface TWTRErrorScribeEvent : TWTRScribeEvent
{
    NSError *_error;
    NSString *_errorMessage;
}

@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1 message:(id)arg2;
- (id)dictionaryRepresentation;

@end

