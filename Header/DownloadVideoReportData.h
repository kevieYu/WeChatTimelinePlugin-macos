//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DownloadVideoReportData : NSObject
{
    unsigned int _m_groupnum;
    unsigned int _m_nettype;
    unsigned int _m_videobitrate;
    unsigned int _m_audiobitrate;
    unsigned int _m_size;
    unsigned int _m_length;
    unsigned int _m_framerate;
    NSString *_m_fromuin;
    NSString *_m_session;
    NSString *_m_fileid;
    NSString *_m_cdnip;
    NSString *_m_newmd5;
    unsigned long long _m_begintime;
    unsigned long long _m_endtime;
    NSString *_m_resolution;
}

@property(nonatomic) unsigned int m_framerate; // @synthesize m_framerate=_m_framerate;
@property(retain, nonatomic) NSString *m_resolution; // @synthesize m_resolution=_m_resolution;
@property(nonatomic) unsigned int m_length; // @synthesize m_length=_m_length;
@property(nonatomic) unsigned int m_size; // @synthesize m_size=_m_size;
@property(nonatomic) unsigned int m_audiobitrate; // @synthesize m_audiobitrate=_m_audiobitrate;
@property(nonatomic) unsigned int m_videobitrate; // @synthesize m_videobitrate=_m_videobitrate;
@property(nonatomic) unsigned long long m_endtime; // @synthesize m_endtime=_m_endtime;
@property(nonatomic) unsigned long long m_begintime; // @synthesize m_begintime=_m_begintime;
@property(retain, nonatomic) NSString *m_newmd5; // @synthesize m_newmd5=_m_newmd5;
@property(retain, nonatomic) NSString *m_cdnip; // @synthesize m_cdnip=_m_cdnip;
@property(nonatomic) unsigned int m_nettype; // @synthesize m_nettype=_m_nettype;
@property(retain, nonatomic) NSString *m_fileid; // @synthesize m_fileid=_m_fileid;
@property(nonatomic) unsigned int m_groupnum; // @synthesize m_groupnum=_m_groupnum;
@property(retain, nonatomic) NSString *m_session; // @synthesize m_session=_m_session;
@property(retain, nonatomic) NSString *m_fromuin; // @synthesize m_fromuin=_m_fromuin;
- (void).cxx_destruct;
- (id)copy;
- (id)logStr;
- (id)init;

@end
