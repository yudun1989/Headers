//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface OrangeUpdateIndexModel : NSObject
{
    NSString *_cdn;
    NSString *_md5;
    NSString *_protocol;
    NSString *_resourceId;
}

@property(copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *cdn; // @synthesize cdn=_cdn;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

