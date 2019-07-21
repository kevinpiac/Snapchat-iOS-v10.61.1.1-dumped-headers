//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSAttributedString, NSString, SCCFriendsFeedStatusEntity;

@interface SCCFriendsFeedStatus : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _hasConsumableContent;
    SCCFriendsFeedStatusEntity *_entity;
    NSAttributedString *_infoText;
    NSString *_iconSrc;
}

+ (id)_sourceStringForFeedIcon:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) SCCFriendsFeedStatusEntity *entity; // @synthesize entity=_entity;
@property(nonatomic) _Bool hasConsumableContent; // @synthesize hasConsumableContent=_hasConsumableContent;
@property(copy, nonatomic) NSString *iconSrc; // @synthesize iconSrc=_iconSrc;
@property(retain, nonatomic) NSAttributedString *infoText; // @synthesize infoText=_infoText;
- (id)initWithEntity:(id)arg1 infoText:(id)arg2 hasConsumableContent:(_Bool)arg3 iconSrc:(id)arg4;
- (id)initWithFriendsFeedItem:(id)arg1 currentUserInfoProvider:(id)arg2;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

