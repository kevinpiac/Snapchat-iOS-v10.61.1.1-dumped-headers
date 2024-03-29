//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCGroupInviteVenueModel : NSObject
{
    NSString *_displayName;
    NSString *_address;
    NSString *_venueId;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithDisplayName:(id)arg1 address:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3 venueId:(id)arg4;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;

@end

