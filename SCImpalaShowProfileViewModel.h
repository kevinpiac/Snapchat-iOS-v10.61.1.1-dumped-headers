//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSData, NSNumber, NSString;

@interface SCImpalaShowProfileViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSData *_showProfileLaunchInfoBytes;
    NSString *_accountServiceUrl;
    NSString *_showsServiceUrl;
    NSString *_watchedStateServiceUrl;
    NSNumber *_notificationsOptInEnabled;
    NSString *_sourcePageType;
    NSString *_pageEntryType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accountServiceUrl; // @synthesize accountServiceUrl=_accountServiceUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShowProfileLaunchInfoBytes:(id)arg1 accountServiceUrl:(id)arg2 showsServiceUrl:(id)arg3 watchedStateServiceUrl:(id)arg4 notificationsOptInEnabled:(id)arg5 sourcePageType:(id)arg6 pageEntryType:(id)arg7;
@property(retain, nonatomic) NSNumber *notificationsOptInEnabled; // @synthesize notificationsOptInEnabled=_notificationsOptInEnabled;
@property(copy, nonatomic) NSString *pageEntryType; // @synthesize pageEntryType=_pageEntryType;
@property(copy, nonatomic) NSData *showProfileLaunchInfoBytes; // @synthesize showProfileLaunchInfoBytes=_showProfileLaunchInfoBytes;
@property(copy, nonatomic) NSString *showsServiceUrl; // @synthesize showsServiceUrl=_showsServiceUrl;
@property(copy, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;
@property(copy, nonatomic) NSString *watchedStateServiceUrl; // @synthesize watchedStateServiceUrl=_watchedStateServiceUrl;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

