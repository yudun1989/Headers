//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSTagDetail, KS_feed;

@interface KSTagPhotoItem : NSObject
{
    _Bool _hasUploadStatics;
    KS_feed *_photo;
    KSTagDetail *_tag;
}

@property(nonatomic) _Bool hasUploadStatics; // @synthesize hasUploadStatics=_hasUploadStatics;
@property(retain, nonatomic) KSTagDetail *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) KS_feed *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (id)initWithPhoto:(id)arg1 tag:(id)arg2 tagId:(unsigned long long)arg3 rich:(_Bool)arg4;

@end

