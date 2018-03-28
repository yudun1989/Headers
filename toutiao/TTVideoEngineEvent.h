//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TTVideoEngineEvent : NSObject
{
    _Bool _hijack;
    _Bool _hw;
    NSString *_logType;
    NSString *_sv;
    NSString *_pv;
    NSString *_pc;
    NSString *_sdk_version;
    NSString *_v;
    long long _pt;
    long long _at;
    long long _dns_t;
    long long _tran_ct;
    long long _tran_ft;
    long long _re_f_videoframet;
    long long _re_f_audioframet;
    long long _de_f_videoframet;
    long long _de_f_audioframet;
    long long _bu_acu_t;
    long long _vt;
    long long _et;
    long long _lt;
    long long _st;
    long long _bft;
    long long _bc;
    long long _dbc;
    long long _br;
    NSArray *_vu;
    long long _vd;
    long long _vs;
    NSString *_codec;
    long long _vps;
    long long _vds;
    long long _video_preload_size;
    NSString *_df;
    NSString *_lf;
    long long _errt;
    long long _errc;
    NSDictionary *_merror;
    NSDictionary *_ex;
    long long _vsc;
    NSDictionary *_preload;
    NSDictionary *_playItem;
    NSDictionary *_feed;
    NSString *_initialURL;
    NSString *_tag;
    long long _downloadSpeed;
    long long _lc;
}

@property(nonatomic) long long lc; // @synthesize lc=_lc;
@property(nonatomic) long long downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property(nonatomic) _Bool hw; // @synthesize hw=_hw;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *initialURL; // @synthesize initialURL=_initialURL;
@property(copy, nonatomic) NSDictionary *feed; // @synthesize feed=_feed;
@property(copy, nonatomic) NSDictionary *playItem; // @synthesize playItem=_playItem;
@property(copy, nonatomic) NSDictionary *preload; // @synthesize preload=_preload;
@property(nonatomic) long long vsc; // @synthesize vsc=_vsc;
@property(copy, nonatomic) NSDictionary *ex; // @synthesize ex=_ex;
@property(nonatomic) _Bool hijack; // @synthesize hijack=_hijack;
@property(copy, nonatomic) NSDictionary *merror; // @synthesize merror=_merror;
@property(nonatomic) long long errc; // @synthesize errc=_errc;
@property(nonatomic) long long errt; // @synthesize errt=_errt;
@property(copy, nonatomic) NSString *lf; // @synthesize lf=_lf;
@property(copy, nonatomic) NSString *df; // @synthesize df=_df;
@property(nonatomic) long long video_preload_size; // @synthesize video_preload_size=_video_preload_size;
@property(nonatomic) long long vds; // @synthesize vds=_vds;
@property(nonatomic) long long vps; // @synthesize vps=_vps;
@property(copy, nonatomic) NSString *codec; // @synthesize codec=_codec;
@property(nonatomic) long long vs; // @synthesize vs=_vs;
@property(nonatomic) long long vd; // @synthesize vd=_vd;
@property(copy, nonatomic) NSArray *vu; // @synthesize vu=_vu;
@property(nonatomic) long long br; // @synthesize br=_br;
@property(nonatomic) long long dbc; // @synthesize dbc=_dbc;
@property(nonatomic) long long bc; // @synthesize bc=_bc;
@property(nonatomic) long long bft; // @synthesize bft=_bft;
@property(nonatomic) long long st; // @synthesize st=_st;
@property(nonatomic) long long lt; // @synthesize lt=_lt;
@property(nonatomic) long long et; // @synthesize et=_et;
@property(nonatomic) long long vt; // @synthesize vt=_vt;
@property(nonatomic) long long bu_acu_t; // @synthesize bu_acu_t=_bu_acu_t;
@property(nonatomic) long long de_f_audioframet; // @synthesize de_f_audioframet=_de_f_audioframet;
@property(nonatomic) long long de_f_videoframet; // @synthesize de_f_videoframet=_de_f_videoframet;
@property(nonatomic) long long re_f_audioframet; // @synthesize re_f_audioframet=_re_f_audioframet;
@property(nonatomic) long long re_f_videoframet; // @synthesize re_f_videoframet=_re_f_videoframet;
@property(nonatomic) long long tran_ft; // @synthesize tran_ft=_tran_ft;
@property(nonatomic) long long tran_ct; // @synthesize tran_ct=_tran_ct;
@property(nonatomic) long long dns_t; // @synthesize dns_t=_dns_t;
@property(nonatomic) long long at; // @synthesize at=_at;
@property(nonatomic) long long pt; // @synthesize pt=_pt;
@property(copy, nonatomic) NSString *v; // @synthesize v=_v;
@property(copy, nonatomic) NSString *sdk_version; // @synthesize sdk_version=_sdk_version;
@property(copy, nonatomic) NSString *pc; // @synthesize pc=_pc;
@property(copy, nonatomic) NSString *pv; // @synthesize pv=_pv;
@property(copy, nonatomic) NSString *sv; // @synthesize sv=_sv;
@property(copy, nonatomic) NSString *logType; // @synthesize logType=_logType;
- (void).cxx_destruct;
- (id)jsonDict;
- (id)description;
- (id)init;

@end

