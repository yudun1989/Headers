//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FilterExtendinfo;

@interface C2CCommonExtendinfo : NSObject
{
    int _uint32_info_id;
    FilterExtendinfo *_msg_filter_extendinfo;
}

@property(copy, nonatomic) FilterExtendinfo *msg_filter_extendinfo; // @synthesize msg_filter_extendinfo=_msg_filter_extendinfo;
@property(nonatomic) int uint32_info_id; // @synthesize uint32_info_id=_uint32_info_id;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithuint32_info_id:(int)arg1 msg_filter_extendinfo:(id)arg2;

@end

