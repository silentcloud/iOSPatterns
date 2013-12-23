//
//  Album+TableRepresentation.h
//  BlueLibrary
//
//  Created by silentcloud on 11/9/13.
//  Copyright (c) 2013 Eli Ganem. All rights reserved.
//

#import "Album.h"

@interface Album (TableRepresentation)

- (NSDictionary*)tr_tableRepresentation;

@end
