//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession;

@interface SCEmojiBrushResourceProvider : NSObject
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_getEmojiBrushResource;
- (void)_setEmojiBrushResource:(id)arg1;
- (void)checkEmojiBrushListAndUpdateIfNecessary;
- (id)currentAvailableEmojiBrushList;
- (id)currentAvailableEmojiBrushListVersion;
- (void)displayedNewEmojiBrushListForVersion:(id)arg1;
- (_Bool)hasSeenNewEmojiBrushList;
- (id)initWithUserSession:(id)arg1;

@end

