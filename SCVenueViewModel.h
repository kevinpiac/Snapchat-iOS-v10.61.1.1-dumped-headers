//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCVenueViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSString *_venueId;
    NSString *_venueName;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVenueId:(id)arg1 venueName:(id)arg2;
@property(copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(copy, nonatomic) NSString *venueName; // @synthesize venueName=_venueName;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

