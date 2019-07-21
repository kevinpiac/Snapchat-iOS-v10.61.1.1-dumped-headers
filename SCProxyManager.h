//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDate, SCProxyInfo, SCSessionRequestManager;

@interface SCProxyManager : NSObject <NSCoding>
{
    SCSessionRequestManager *_requestManager;
    _Bool _shouldSendLatencyInfo;
    SCProxyInfo *_currentProxy;
    NSDate *_nextProxyUpdateTime;
    NSArray *_directoryList;
    long long _listVersion;
    NSArray *_proxyList;
    NSArray *_validSuffixes;
    unsigned long long _backgroundTaskID;
}

+ (id)path;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)URLIsValid:(id)arg1;
- (_Bool)URLSAreValid:(id)arg1;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(retain, nonatomic) SCProxyInfo *currentProxy; // @synthesize currentProxy=_currentProxy;
@property(retain, nonatomic) NSArray *directoryList; // @synthesize directoryList=_directoryList;
- (void)downloadProxyInfo;
- (void)downloadProxyInfoIfNecessaryOnRequest:(id)arg1;
- (void)downloadProxyInfoIfNecessaryOnResponse:(id)arg1 error:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long listVersion; // @synthesize listVersion=_listVersion;
@property(retain, nonatomic) NSDate *nextProxyUpdateTime; // @synthesize nextProxyUpdateTime=_nextProxyUpdateTime;
@property(retain, nonatomic) NSArray *proxyList; // @synthesize proxyList=_proxyList;
- (void)saveState;
- (void)selectBestProxy;
@property(nonatomic) _Bool shouldSendLatencyInfo; // @synthesize shouldSendLatencyInfo=_shouldSendLatencyInfo;
@property(retain, nonatomic) NSArray *validSuffixes; // @synthesize validSuffixes=_validSuffixes;
- (_Bool)shouldDownloadProxyInfoWithResponse:(id)arg1 error:(id)arg2;
- (void)testProxyLatencies;

@end

