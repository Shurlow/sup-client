//
//  Map.h
//  sup
//
//  Created by Sam Finegold on 3/29/15.
//  Copyright (c) 2015 Sam Finegold. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GoogleMaps/GoogleMaps.h>
@interface MapViewController : UIViewController
{
}
@property (weak, nonatomic) IBOutlet GMSMapView *mapView;
@property (nonatomic, retain)NSArray *posts;

-(void)addMarker:(id)lat :(id)lng :(NSNumber*)owner_Id;
@end