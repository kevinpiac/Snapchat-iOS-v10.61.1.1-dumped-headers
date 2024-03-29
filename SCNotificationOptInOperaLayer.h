//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCOperaPage, SCUserSession;
@protocol SCImageDownloading;

@interface SCNotificationOptInOperaLayer : NSObject <SCOperaLayer>
{
    SCOperaPage *_page;
    NSString *_namespace;
    SCUserSession *_userSession;
    id <SCImageDownloading> _imageDownloader;
    long long _source;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
@property(readonly) NSString *namespace; // @synthesize namespace=_namespace;
- (id)page;
- (void)setPage:(id)arg1;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (unsigned long long)type;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

