//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface NilePitPlaceholderFactory : NSObject
{
    NSDictionary *_map;
    NSDictionary *_mapBgColor;
    NSDictionary *_mapBlockColor;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *mapBlockColor; // @synthesize mapBlockColor=_mapBlockColor;
@property(copy, nonatomic) NSDictionary *mapBgColor; // @synthesize mapBgColor=_mapBgColor;
@property(copy, nonatomic) NSDictionary *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (id)getPitPlaceHolder:(id)arg1 size:(struct CGSize)arg2;

@end

