//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSDictionary, NSString, NSURL, SCOperaPage, UIColor;

@interface SCOperaRemoteVideoLayer : NSObject <SCOperaLayer>
{
    NSURL *_cacheDirectory;
    _Bool _isInline;
    _Bool _videoRotationEnabled;
    SCOperaPage *_page;
    NSString *_firstFrameImageKey;
    NSString *_videoId;
    UIColor *_primaryColor;
    NSDictionary *_remoteURLToRelativePath;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *firstFrameImageKey; // @synthesize firstFrameImageKey=_firstFrameImageKey;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isInline; // @synthesize isInline=_isInline;
- (id)localURLForRemoteURL:(id)arg1;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) NSDictionary *remoteURLToRelativePath; // @synthesize remoteURLToRelativePath=_remoteURLToRelativePath;
- (unsigned long long)type;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(readonly, nonatomic) _Bool videoRotationEnabled; // @synthesize videoRotationEnabled=_videoRotationEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

