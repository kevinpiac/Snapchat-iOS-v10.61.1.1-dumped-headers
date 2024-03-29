//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SOJURichStoryRichStoryDeepLinkAttachment, SOJUUnlockablesAppInstallAttachment, SOJUUnlockablesLongFormVideoAttachment, SOJUUnlockablesWebViewAttachment;

@protocol SOJUUnlockablesAttachment <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUUnlockablesAppInstallAttachment *appInstall;
@property(readonly, copy, nonatomic) NSString *attachmentType;
@property(readonly, copy, nonatomic) NSString *ctaText;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryDeepLinkAttachment *deepLink;
@property(readonly, copy, nonatomic) NSString *localizedCtaText;
@property(readonly, copy, nonatomic) SOJUUnlockablesLongFormVideoAttachment *longFormVideo;
@property(readonly, copy, nonatomic) SOJUUnlockablesWebViewAttachment *webView;
@end

