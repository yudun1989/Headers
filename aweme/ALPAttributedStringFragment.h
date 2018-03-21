//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString, NSTextAttachment;

@interface ALPAttributedStringFragment : NSObject <NSCopying, NSMutableCopying>
{
    unsigned long long _type;
    NSString *_string;
    NSTextAttachment *_attachment;
    NSDictionary *_attributes;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSTextAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttachment:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;

@end

