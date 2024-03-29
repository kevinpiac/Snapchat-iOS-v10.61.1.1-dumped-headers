//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSSet, NSString, SCEmbeddedMapViewLoggingSession;

@interface SCProfileEmbeddedMapViewModel : NSObject <NSCopying>
{
    _Bool _requiresLocationPermission;
    NSSet *_visibleUserIds;
    NSString *_selectedUserId;
    SCEmbeddedMapViewLoggingSession *_loggingSession;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithRequiresLocationPermission:(_Bool)arg1 visibleUserIds:(id)arg2 selectedUserId:(id)arg3 loggingSession:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCEmbeddedMapViewLoggingSession *loggingSession; // @synthesize loggingSession=_loggingSession;
@property(readonly, nonatomic) _Bool requiresLocationPermission; // @synthesize requiresLocationPermission=_requiresLocationPermission;
@property(readonly, copy, nonatomic) NSString *selectedUserId; // @synthesize selectedUserId=_selectedUserId;
@property(readonly, copy, nonatomic) NSSet *visibleUserIds; // @synthesize visibleUserIds=_visibleUserIds;

@end

