//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface KSQRCodeManager : NSObject
{
    NSMutableArray *_validators;
}

@property(retain, nonatomic) NSMutableArray *validators; // @synthesize validators=_validators;
- (void).cxx_destruct;
- (_Bool)handleQRCode:(id)arg1 source:(unsigned long long)arg2;
- (void)addValidator:(id)arg1;
- (id)init;

@end

