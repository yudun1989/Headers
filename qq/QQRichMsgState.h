//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQTextMsgState.h>

@interface QQRichMsgState : QQTextMsgState
{
    float _uploadProgress;
}

- (void)setValueWithState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)checkState;
- (id)queryModelWithModel:(id)arg1;
- (void)updateRichStateInDb;
- (_Bool)paused;
@property(nonatomic) float uploadProgress; // @synthesize uploadProgress=_uploadProgress;
- (_Bool)failed;
- (_Bool)sending;

@end
