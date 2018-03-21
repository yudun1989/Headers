//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface TWTRTweetVideoEntityVariant : NSObject <NSCoding, NSCopying>
{
    long long _bitrate;
    NSString *_contentType;
    NSURL *_URL;
}

+ (id)variantFromDictionary:(id)arg1;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
- (void).cxx_destruct;
- (_Bool)isEqualToVariant:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBitrate:(long long)arg1 contentType:(id)arg2 URL:(id)arg3;
- (id)initFromDictionary:(id)arg1;

@end
