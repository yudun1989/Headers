//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTLFileHash : NSObject
{
}

+ (id)sha512HashOfFileAtPath:(id)arg1;
+ (id)sha1HashOfFileAtPath:(id)arg1;
+ (id)md5HashOfFileAtPath:(id)arg1;
+ (id)hashOfFileAtPath:(id)arg1 withComputationContext:(struct _TTLFileHashComputationContext *)arg2;

@end
