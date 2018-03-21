//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MUKCustomEmoticon-Protocol.h"
#import "TBIMEmoticonAdapter-Protocol.h"

@class NSString, TBAMPEmoticon;

@interface TBIMEmoticon : NSObject <TBIMEmoticonAdapter, MUKCustomEmoticon>
{
    NSString *_name;
    NSString *_localPreviewUrl;
    NSString *_localUrl;
    NSString *_imgUrlForSend;
    id _customEmoticonContext;
    TBAMPEmoticon *_data;
}

@property(retain, nonatomic) TBAMPEmoticon *data; // @synthesize data=_data;
@property(retain, nonatomic) id customEmoticonContext; // @synthesize customEmoticonContext=_customEmoticonContext;
@property(copy, nonatomic) NSString *imgUrlForSend; // @synthesize imgUrlForSend=_imgUrlForSend;
@property(copy, nonatomic) NSString *localUrl; // @synthesize localUrl=_localUrl;
@property(copy, nonatomic) NSString *localPreviewUrl; // @synthesize localPreviewUrl=_localPreviewUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

