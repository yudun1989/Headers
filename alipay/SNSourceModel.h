//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SNSourceModel : NSObject
{
    NSString *_type;
    NSString *_src;
    NSDictionary *_ext;
    struct CGSize _size;
}

@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

