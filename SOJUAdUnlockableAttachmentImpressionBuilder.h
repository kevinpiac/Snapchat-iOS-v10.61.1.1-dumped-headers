//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SOJUAdUnlockableDeepLink, SOJUAdUnlockableLongformAppInstall, SOJUAdUnlockableLongformVideoView, SOJUAdUnlockableLongformWebviewView;

@interface SOJUAdUnlockableAttachmentImpressionBuilder : NSObject
{
    SOJUAdUnlockableLongformVideoView *_longformVideoImpression;
    SOJUAdUnlockableLongformWebviewView *_remoteWebpageImpression;
    SOJUAdUnlockableLongformAppInstall *_appInstallImpression;
    SOJUAdUnlockableDeepLink *_deepLinkImpression;
}

+ (id)withJUAdUnlockableAttachmentImpression:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAppInstallImpression:(id)arg1;
- (id)setDeepLinkImpression:(id)arg1;
- (id)setLongformVideoImpression:(id)arg1;
- (id)setRemoteWebpageImpression:(id)arg1;

@end

