//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FilterStyle : NSObject
{
    NSString *_style_name;
    NSString *_style_id;
}

@property(copy, nonatomic) NSString *style_id; // @synthesize style_id=_style_id;
@property(copy, nonatomic) NSString *style_name; // @synthesize style_name=_style_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithstyle_id:(id)arg1 style_name:(id)arg2;

@end

