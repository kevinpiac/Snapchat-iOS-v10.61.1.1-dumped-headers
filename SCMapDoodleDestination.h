//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapDestination-Protocol.h"

@class NSString, SCMapDoodle;

@interface SCMapDoodleDestination : NSObject <SCMapDestination>
{
    SCMapDoodle *_doodle;
}

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
@property(retain, nonatomic) SCMapDoodle *doodle; // @synthesize doodle=_doodle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

