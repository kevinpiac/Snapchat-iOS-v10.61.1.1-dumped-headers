//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString, SCImpalaPublicProfileServiceConfig;
@protocol SCCLensActionHandling, SCComposerFoundationApplicationProtocol, SCImpalaPresentationControlling;

@interface SCImpalaCommunityLensProfileContext : NSObject <SCComposerJsConvertible, NSCopying>
{
    id <SCComposerFoundationApplicationProtocol> _application;
    SCImpalaPublicProfileServiceConfig *_serviceConfig;
    id <SCImpalaPresentationControlling> _presentationController;
    id <SCCLensActionHandling> _lensActionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCComposerFoundationApplicationProtocol> application; // @synthesize application=_application;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplication:(id)arg1 serviceConfig:(id)arg2 presentationController:(id)arg3 lensActionHandler:(id)arg4;
@property(retain, nonatomic) id <SCCLensActionHandling> lensActionHandler; // @synthesize lensActionHandler=_lensActionHandler;
@property(retain, nonatomic) id <SCImpalaPresentationControlling> presentationController; // @synthesize presentationController=_presentationController;
@property(retain, nonatomic) SCImpalaPublicProfileServiceConfig *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

